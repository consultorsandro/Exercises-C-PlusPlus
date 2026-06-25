#include <iostream>


int main(){
	/*
	// Can be contain garbage value
int elephant_count;

int lion_count{}; // Initialized to 0

int dog_count{10};

int cat_count{15};

int domesticated_animals{ dog_count + cat_count }; // initialized with a expression

//int new_number(doesnt_exist);

//int narrowing_number{ 2.9 }; // narrowing conversion, will cause a warning}

//	int narrowing_conversion(2.9);

//	std::cout << "elephant_count: " << elephant_count << std::endl;
	std::cout << "lion_count: " << lion_count << std::endl;
	std::cout << "dog_count: " << dog_count << std::endl;
	std::cout << "cat_count: " << cat_count << std::endl;
	std::cout << "domesticated_animals: " << domesticated_animals << std::endl;
	*/
	//Assignment notation

	int bike_count = 2;
	int truck_count = 7;
	int vehicle_count = bike_count + truck_count;
	int narrowing_conversion_assignment = 2.9;

	std::cout << "bike_count: " << bike_count << std::endl;
	std::cout << "truck_count: " << truck_count << std::endl;
	std::cout << "vehicle_count: " << vehicle_count << std::endl;	
	std::cout << "narrowing_conversion_assignment: " << narrowing_conversion_assignment << std::endl;

	// sizeof operator
	std::cout << "sizeof int: " << sizeof(int) << std::endl;
	std::cout << "sizeof truck_count: " << sizeof(truck_count) << std::endl;

    return 0;
}