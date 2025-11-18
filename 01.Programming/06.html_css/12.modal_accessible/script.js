const modal = document.getElementById("modal");
const openBtn = document.getElementById("openModal");
const closeBtn = document.getElementById("closeModal");

openBtn.addEventListener("click", () => {
  modal.classList.remove("hidden");
  closeBtn.focus();
});

closeBtn.addEventListener("click", () => {
  modal.classList.add("hidden");
  openBtn.focus();
});

document.addEventListener("keydown", (e) => {
  if (e.key === "Escape" && !modal.classList.contains("hidden")) {
    modal.classList.add("hidden");
    openBtn.focus();
  }
});

