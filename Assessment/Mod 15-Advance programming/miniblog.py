import json



class Post():
    username = "username"
    title = "title"
    content = "content"

    def __init__(self, username, title, content):
        self.username = username
        self.title = title
        self.content = content

    
    def write(self):
        # self.username = input("username: ")
        # self.title = input("title: ")
        # self.content = input("content: ")
        post = {"Username": self.username, "Title": self.title, "Content": self.content}

        try:
            try:
                with open("post.json", "r") as f:
                    data = json.load(f)
            except:
                data = []

         # Add new post
            data.append(post)
            with open("post.json", 'w') as f:
                json.dump(data, f)

            print("Saved Data")
        except Exception as e:
            print(e)

            
    def View(self):
        pass



print("--------------------------")
print("Press 1 To Write Post")
print("Press 2 To View Post")
print("Press 3 To Exit X " )
try:
    user_choice = input("Enter Choice: ")
except Exception as e:
    print(e)



match(user_choice):
    case "1":

        print("---------Writing Post --------")
        username = input("username: ")
        title = input("title: ")
        content = input("content: ")

        c1 = Post(username, title, content)
        c1.write()
        

