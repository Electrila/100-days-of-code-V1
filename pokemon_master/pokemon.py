class Pokemon:
  def __init__(self, name, level, type):
    self.name = name
    self.level = level
    self.type = type
    self.max_health = level * 5
    self.current_health = level * 5
    self.is_knocked_out = False
  
  def __repr__(self):
    return "Level {level} {name} has {health} HP remaining. This is a {type} type Pokemon.".format(level=self.level, name=self.name, health=self.current_health, type=self.type)
  
  def knock_out(self):
    self.is_knocked_out = True
    if self.current_health != 0:
      self.current_health = 0
    print("{name} was knocked out!".format(name=self.name))
  
  def revive(self):
    self.is_knocked_out = False
    if self.current_health == 0:
      self.current_health = 1
    print("{name} was revived!".format(name=self.name))
  
  def lose_health(self, damage):
    self.current_health -= damage
    if self.current_health <= 0:
      self.current_health = 0
      self.knock_out()
    else:
      print("{name} took {damage} damage! They now have {health} HP remaining!".format(name=self.name, damage=damage, health=self.current_health))
      
  def heal(self, healing):
    if self.current_health == 0:
      self.revive()
    self.current_health += healing
    if self.current_health >= self.max_health:
      self.current_health = self.max_health
    print("{name} healed for {healing} HP! They now have {health} HP!".format(name=self.name, healing=healing, health=self.current_health))
