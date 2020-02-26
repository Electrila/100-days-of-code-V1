def cheer_creator(yards_gained):
    if yards_gained > 10:
        return "High Five"
    elif yards_gained <= 10 and yards_gained > 1:
        return "Ra!" * yards_gained
    else:
        return "shh"

print(cheer_creator(int(input())))
