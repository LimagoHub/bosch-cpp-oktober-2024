#pragma once
#include <ostream>
#include <string>


	class Schwein
	{
	
		std::string name;
		int gewicht;

	public:

		Schwein(std::string neuername= "Nobody");
		~Schwein();
		std::string get_name() const
		{
			return name;
		}

		void set_name(const std::string& name)
		{
			this->name = name;
		}

		int get_gewicht() const
		{
			return gewicht;
		}

		

	
		

		
		void fuettern();

		friend std::ostream& operator<<(std::ostream& os, const Schwein& obj)
		{
			return os
				<< "name: " << obj.name
				<< " gewicht: " << obj.gewicht;
		}
	};


