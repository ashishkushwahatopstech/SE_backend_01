const toggle = document.querySelector(".menu-toggle");
    const menu = document.querySelector(".nav-items");

    toggle.addEventListener("click", () => {
        menu.classList.toggle("active");
    });