import numpy as np
import sys
input = sys.stdin.buffer.readline


print("Input the number of queens :")
nQueens = int(input())
max_fitness = int(nQueens * (nQueens - 1) / 2)

STOP_CTR = 28
MUTATE = 0.000001
MUTATE_FLAG = True
MAX_ITER = 100000
POPULATION = None

class BoardPosition:
	def __init__(self):
		self.sequence = None
		self.fitness = None
		self.survival = None
	def setSequence(self, val):
		self.sequence = val
	def setFitness(self, fitness):
		self.fitness = fitness
	def setSurvival(self, val):
		self.survival = val

def generateChromosome():

	global nQueens
	init_distribution = np.arange(nQueens)
	np.random.shuffle(init_distribution)
	return init_distribution
		

def fitness(chromosome = None):

	clashes = 0;
	row_col_clashes = abs(len(chromosome) - len(np.unique(chromosome)))
	clashes += row_col_clashes

	# calculate diagonal clashes
	for i in range(len(chromosome)):
		for j in range(len(chromosome)):
			if ( i != j):
				dx = abs(i-j)
				dy = abs(chromosome[i] - chromosome[j])
				if(dx == dy):
					clashes += 1


	return 28 - clashes	


def generatePopulation(population_size = 100):
	global POPULATION

	POPULATION = population_size

	population = [BoardPosition() for i in range(population_size)]
	for i in range(population_size):
		population[i].setSequence(generateChromosome())
		population[i].setFitness(fitness(population[i].sequence))

	return population


def getParent():
	globals()	
	parent1, parent2 = None, None
	
	summation_fitness = np.sum([x.fitness for x in population])
	for each in population:
		each.survival = each.fitness/(summation_fitness*1.0)

	while True:
		parent1_random = np.random.rand()
		parent1_rn = [x for x in population if x.survival <= parent1_random]
		try:
			parent1 = parent1_rn[0]
			break
		except:
			pass

	while True:
		parent2_random = np.random.rand()
		parent2_rn = [x for x in population if x.survival <= parent2_random]
		try:
			t = np.random.randint(len(parent2_rn))
			parent2 = parent2_rn[t]
			if parent2 != parent1:
				break
			else:
				continue
		except:
			continue

	if parent1 is not None and parent2 is not None:
		return parent1, parent2
	else:
		sys.exit(-1)

def reproduce_crossover(parent1, parent2):
	globals()
	n = len(parent1.sequence)
	c = np.random.randint(n, size=1)
	child = BoardPosition()
	child.sequence = []
	child.sequence.extend(parent1.sequence[0:c])
	child.sequence.extend(parent2.sequence[c:])
	child.setFitness(fitness(child.sequence))
	return child


def mutate(child):

	if child.survival < MUTATE:
		c = np.random.randint(8)
		child.sequence[c] = np.random.randint(8)
	return child

def GA(iteration):
	
	globals()
	newpopulation = []
	for i in range(len(population)):
		parent1, parent2 = getParent()

		child = reproduce_crossover(parent1, parent2)

		if(MUTATE_FLAG):
			child = mutate(child)

		newpopulation.append(child)
	return newpopulation


def stop():
	globals()
	fitnessvals = [pos.fitness for pos in population]
	if STOP_CTR in fitnessvals:
		return True
	if MAX_ITER == iteration:
		return True
	return False



population = generatePopulation(1000)

iteration = 0;
while not stop():
	population = GA(iteration)
	iteration +=1 
		
print("The generateChromosomes :")
for each in population:
	print ("chromosome :", each.sequence, "fitness :", each.fitness)
	
print("\n\nMaximum Fitness :", max_fitness)
print("Total population created :", len(population))

print("The chromosomes with max_fitness:")
for each in population:
    if each.fitness == max_fitness:
	    print ("chromosome :", each.sequence)


board = []
chrom = []
for i in range(nQueens):
    temp = ['x'] * nQueens
    board.append(temp)

for each in population:
    if each.fitness == max_fitness:
        print("current chromosome : ", each.sequence)
        for i in range(nQueens):
            chrom.append(each.sequence[i])
        break
	    
for i in range(nQueens):
    board[nQueens - 1 - chrom[i]][i] = 'Q'
    
for i in board:
    print(" ".join(i))