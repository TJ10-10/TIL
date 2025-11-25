function divide(a, b) {
    if (b === 0) {
        throw new Error("ゼロでは割れません");
    }
    return a / b;
}
try {
    console.log("結果:", divide(10, 2));
    console.log("結果:", divide(5, 0));
}
catch (error) {
    if (error instanceof Error) {
        console.error("エラー:", error.message);
    }
}
