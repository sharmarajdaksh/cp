class Street:
    def __init__(self, name, begin_intersection, end_intersection, length):
        self.name = name
        self.begin_intersection = begin_intersection
        self.end_intersection = end_intersection
        self.length = length


class StreetsList:
    def __init__(self):
        self.streets = None

    def add_street(self, name, begin_intersection, end_intersection, length):
        if self.streets is None:
            self.streets = list()
        street = Street(name, begin_intersection, end_intersection, length)
        self.streets.append(street)


class CarPath:
    def __init__(self, streets_list):
        self.streets_list = streets_list


class CarPathsList:
    def __init__(self):
        self.car_paths_list = None

    def add_car_path(self, car_path):
        if self.car_paths_list is None:
            self.car_paths_list = list()
        self.car_paths_list.append(car_path)


def main():
    with open('a', 'r') as f:
        input_lines = f.read().split('\n')

    duration_of_simulation, num_intersections, num_streets, num_cars, bonus = input_lines.split()
    duration_of_simulation = int(duration_of_simulation)
    num_intersections = int(num_intersections)
    num_streets = int(num_streets)
    num_streets = int(num_streets)
    num_cars = int(num_cars)
    bonus = int(bonus)

    streets_list = StreetsList()
    for i in range(num_streets):
        begin_intersection, end_intersection, street_name, length = input_lines[1 + i].split(
        )
        begin_intersection = int(begin_intersection)
        end_intersection = int(end_intersection)
        length = int(length)
        street = Street(street_name, begin_intersection,
                        end_intersection, length)
        streets_list = streets_list.add_street(street)

    car_paths_list = CarPathsList()
    for i in range(num_cars):
        car_streets = input_lines[1 + num_streets + i].split()[1:]
        car_path = CarPath(car_streets)
        car_paths_list.append(car_path)


if __name__ == '__main__':
    main()
