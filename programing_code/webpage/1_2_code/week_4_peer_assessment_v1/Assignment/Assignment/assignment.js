var categories_template, category_template, animal_template;
var breadcrumb_template;
var current_category, current_animal;

function showTemplate(template, data){
	var html = template(data);
	$('#content').html(html);
}

function showCategory() {
    showTemplate(category_template, current_category);
    $(".animal-thumbnail").click(function () {
        var index = $(this).data("id");
        current_animal = current_category.animals[index];
        showTemplate(animal_template, current_animal);
        $(".breadcrumb").append(breadcrumb_template({
            type: "animal",
            name: current_animal.name
        }));
        $("#animal-crumb").click(function () {
            return false;
        });
    });
}

$(document).ready(function() {
    var source;
	source = $("#categories-template").html();
	categories_template = Handlebars.compile(source);
	source = $("#category-template").html();
	category_template = Handlebars.compile(source);
	source = $("#animal-template").html();
	animal_template = Handlebars.compile(source);
	source = $("#breadcrumb-template").html();
	breadcrumb_template = Handlebars.compile(source);

    $("#categories-crumb").click(function () {
        showTemplate(categories_template, animals_data);
        $(".breadcrumb").children().filter(":gt(0)").remove();
        $(".category-thumbnail").click(function () {
            var index = $(this).data("id");
            current_category = animals_data.category[index];
            showCategory();
            $(".breadcrumb").append(breadcrumb_template({
                type: "category",
                name: current_category.name
            }));
            $("#category-crumb").click(function () {
                showCategory();
                $(".breadcrumb").children().filter(":gt(1)").remove();
                return false;
            });
        });
        return false;
    });

    $("#categories-crumb").click();
});
