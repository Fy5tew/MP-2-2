#include <ctime>
#include <cstdlib>
#include <stdexcept>


namespace auxil {
	void start() {
		srand(time(nullptr));
	}

	double dget(double rmin, double rmax) {
		if (rmin > rmax) {
			throw std::invalid_argument("rmin parameter cannot be greater than rmax parameter");
		}
		double random_value = (double)rand() / RAND_MAX;
		double limited_random_value = rmin + random_value * (rmax - rmin);
		return limited_random_value;
	}

	int iget(int rmin, int rmax) {
		if (rmin > rmax) {
			throw new std::invalid_argument("rmin parameter cannot be greater than rmax parameter");
		}
		int random_value = rand();
		int limited_random_value = rmin + random_value % (rmax - rmin + 1);
		return limited_random_value;
	}
}
