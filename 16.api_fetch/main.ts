type User = {
  id: number;
  name: string;
  username: string;
  email: string;
};

async function fetchUsers(): Promise<User[]> {
  const res = await fetch("https://jsonplaceholder.typicode.com/users");
  if (!res.ok) {
    throw new Error("Failed to fetch users");
  }
  const data: User[] = await res.json();
  return data;
}

async function main() {
  try {
    const users = await fetchUsers();
    users.forEach(user => {
      console.log(` ${user.name} (${user.email})`);
    });
  } catch (err) {
    console.log("Error:", err);
  }
}

main();
