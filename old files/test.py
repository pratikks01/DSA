class Car:
    kind = 'car'
    def __init__(self, color, name):
        self.color = color
        self.name = name
    def honk(self):
        print('Beep, Im'+self.color)
    
class RedCar(Car):
    def __init__(self):
        Car.__init__(self, 'red', 'redCar')
        self.age = 10

class BlueCar(Car):
    def honk(self):
        print('Beep Beep!')

# car1 = Car('black', 'jaguar')
# print(car1.name)
# car = BlueCar('blue','volvo')
# car.honk()

car1 = BlueCar('green','maruti')
car2 = RedCar()
car2.color = car1.color
print(car2.color)