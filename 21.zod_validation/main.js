"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
var zod_1 = require("zod");
var UserSchema = zod_1.z.object({
    id: zod_1.z.number(),
    name: zod_1.z.string(),
    email: zod_1.z.string().email(),
});
var response = {
    id: 1,
    name: "Erin",
    email: "erin@example.com",
};
try {
    var user = UserSchema.parse(response);
    console.log("バリデーション成功:", user);
}
catch (e) {
    console.log("バリデーションエラー:", e);
}
