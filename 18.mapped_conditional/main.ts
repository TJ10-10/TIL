type Optional<T> = {
  [K in keyof T]?: T[K];
};

interface User {
  id: number;
  name: string;
  email: string;
}

const partialUser: Optional<User> = {
  name: "Mushroom",
};

type IsString<T> = T extends string ? "Yes" : "No";

type Test1 = IsString<string>;
type Test2 = IsString<number>;

type ApiResponse<T> = T extends { error: string }
  ? { success: false; message: T["error"] }
  : { success: true; data: T };

type SuccessData = { name: string };
type ErrorData = { error: "Not Found" };

const res1: ApiResponse<SuccessData> = {
  success: true,
  data: { name: "Erin" },
};

const res2: ApiResponse<ErrorData> = {
  success: false,
  message: "Not Found",
};
