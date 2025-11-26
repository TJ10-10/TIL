const toast = document.getElementById("toast");
const button = document.getElementById("show-toast");

button.addEventListener("click", () => {
  toast.classList.add("show");

  setTimeout(() => {
    toast.classList.remove("show");
  }, 3000);
});
