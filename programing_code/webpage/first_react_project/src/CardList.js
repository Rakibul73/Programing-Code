import Card from "./Card";

function CardList({ Robots }) {
    return (
        <div>
            {Robots.map((user, i) => {
                return (
                    <Card
                        key={Robots[i].id}
                        id={Robots[i].id}
                        name={Robots[i].name}
                        email={Robots[i].email}
                    />
                );
            })}
        </div>
    );
}

export default CardList;
