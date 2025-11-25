import { z } from "zod";

const UserSchema = z.object({
  id: z.number(),
  name: z.string(),
  email: z.string().email(),
});

type User = z.infer<typeof UserSchema>;

const response = {
  id: 1,
  name: "Erin",
  email: "erin@example.com",
};

try {
  const user: User = UserSchema.parse(response);
  console.log("バリデーション成功:", user);
} catch (e) {
  console.log("バリデーションエラー:", e);
}
