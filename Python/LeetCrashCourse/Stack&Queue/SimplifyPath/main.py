class Soltuion:
    def simplify(self, path: str) -> str:
        tokens = path.split("/")
        currPath = []

        for word in tokens:
            if word == "" or word == ".":
                continue
            elif word == "..":
                if currPath:
                    currPath.pop()
            else:
                currPath.append(word)
                
        # currPath = ["home", "desktop", ]

        return "/" + "/".join(currPath)
    
if __name__ == "__main__":
    s = Soltuion()

    path = "/home/user/Documents/../Pictures"

    print(s.simplify(path))




        