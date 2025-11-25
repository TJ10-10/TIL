function delay(ms: number): Promise<string> {
  return new Promise((resolve) => {
    setTimeout(() => {
      resolve(` ${ms}ms 待ちました`);
    }, ms);
  });
}

async function forestWalk() {
  console.log(" 森の中を歩き始めます...");
  const message = await delay(1000);
  console.log(message);
  console.log(" 森の奥に何か見える...!");
}

forestWalk();
