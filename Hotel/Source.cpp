#include <iostream>
#include <vector>


struct Time_of_arrival
{
	short year_of_arrival=0;
	short month_of_arrival=0;
	short day_of_arrival=0;
	short hour_of_arrival=0;
	short minute_of_arrival=0;
	short second_of_arrival=0;
};
struct Time_of_eviction
{
	short year_of_arrival=0;
	short month_of_arrival=0;
	short day_of_arrival=0;
	short hour_of_arrival=0;
	short minute_of_arrival=0;
	short second_of_arrival=0;
};
struct Customer 
{
	Time_of_arrival toa;
	Time_of_eviction toe;
	std::string first_name;
	std::string middle_name;
	std::string personal_id;

};




class Hotel 
{
	Customer c;
	short count_of_room=0;
	short price_for_accommodation_per_day=0;
	short price_for_lunch=0;

public:
	void set_data() 
	{
		std::cout << "Input your Name, middle name, and personal id" << std::endl;
		std::cin >> c.first_name >> c.middle_name >> c.personal_id;
	}
	void get_data() 
	{
		std::cout << "Welcome " <<c.first_name <<" "<< c.middle_name << std::endl;
	}
};


class Hotel_near_the_sea : public Hotel
{
	short rent_ship=0;
	short price_for_entertainment_tour=0;
	short diving_equipment_rental=0;

};


class Hotel_near_the_forest : public Hotel
{
	short rent_for_tour_in_forest=0;
	short price_for_hunt=0;
};



class Hotel_near_the_lake : public Hotel
{
	short price_for_fishing=0;
	short fishing_equipment_rent=0;
	short rent_ship=0;
};

