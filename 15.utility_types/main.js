var updateUser = function (id, updates) {
    console.log("Updating user ".concat(id, " with"), updates);
};
var readonlyUser = {
    id: 1,
    name: "Kinoko",
    email: "kinoko@example.com"
};
var postStatus = {
    draft: true,
    published: false,
    archived: false
};
updateUser(1, { name: "Shiitake" });
