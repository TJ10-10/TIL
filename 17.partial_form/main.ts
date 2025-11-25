type UserForm = {
  username: string;
  age: number;
  email?: string;
};

function validateForm(data: Partial<UserForm>): data is UserForm {
  return (
    typeof data.username === "string" &&
    typeof data.age === "number"
  );
}

const input = {
  username: "kinoko_lover",
  age: 28,
};

if (validateForm(input)) {
  console.log(`ようこそ、${input.username}さん!`);
} else {
  console.log("フォームの入力が正しくありません。");
}
