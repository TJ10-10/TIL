type User = {
  id: number;
  name: string;
  email?: string;
};

const updateUser = (id: number, updates: Partial<User>) => {
  console.log(`Updating user ${id} with`, updates);
};

const readonlyUser: Readonly<User> = {
  id: 1,
  name: "Kinoko",
  email: "kinoko@example.com"
};

type Status = "draft" | "published" | "archived";
const postStatus: Record<Status, boolean> = {
  draft: true,
  published: false,
  archived: false
};

updateUser(1, { name: "Shiitake" });
