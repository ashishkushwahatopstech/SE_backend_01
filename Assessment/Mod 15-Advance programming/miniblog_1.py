import os

# ===== POST CLASS =====
class Post:
    def __init__(self, username, title, content):
        self.username = username
        self.title = title
        self.content = content

    def save_to_file(self):
        filename = f"{self.username}_{self.title}.txt"
        try:
            with open(filename, "w", encoding="utf-8") as file:
                file.write(f"Author: {self.username}\n")
                file.write(f"Title: {self.title}\n\n")
                file.write(self.content)
            print("✅ Post saved successfully!")
        except Exception as e:
            print(f"❌ Error saving post: {e}")


# ===== FUNCTIONS =====

def create_post():
    print("\n--- Create New Post ---")
    
    username = input("Enter your name: ").strip()
    title = input("Enter post title: ").strip()
    content = input("Enter post content: ").strip()

    if not username or not title or not content:
        print("⚠️ All fields are required!")
        return

    post = Post(username, title, content)
    post.save_to_file()


def view_posts():
    print("\n--- Saved Posts ---")
    
    files = [f for f in os.listdir() if f.endswith(".txt")]

    if not files:
        print("No posts found.")
        return

    for i, file in enumerate(files):
        print(f"{i + 1}. {file}")

    try:
        choice = int(input("Select a post number to view: "))
        selected_file = files[choice - 1]

        with open(selected_file, "r", encoding="utf-8") as file:
            print("\n--- Post Content ---")
            print(file.read())

    except (ValueError, IndexError):
        print("❌ Invalid selection!")
    except Exception as e:
        print(f"❌ Error reading file: {e}")


# ===== MAIN MENU =====

def main():
    while True:
        print("\n===== MiniBlog CLI =====")
        print("1. Create Post")
        print("2. View Posts")
        print("3. Exit")

        choice = input("Enter your choice: ").strip()

        if choice == "1":
            create_post()
        elif choice == "2":
            view_posts()
        elif choice == "3":
            print("👋 Exiting MiniBlog. Bye!")
            break
        else:
            print("❌ Invalid choice! Try again.")


# ===== RUN APP =====
if __name__ == "__main__":
    main()