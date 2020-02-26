points = int(input())
num_needed = int(input())

def skee_ball(points, num_needed):
    tickets = int(points / 12)
    if tickets >= num_needed:
        return "Buy it!"
    else:
        return "Try again"

print(skee_ball(points, num_needed))
