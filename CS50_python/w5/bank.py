def main():
    text = input("Greeting: ")
    print(f"${value(text)}")


def value(greeting):

    greeting = greeting.strip().lower()
    if greeting.startswith("hello"):
        return 0
    elif greeting.startswith("h"):
        return 20
    else:
        return 100


if __name__ == "__main__":
    main()
