#ifndef PT_header
#define PT_header
#include <unordered_map>

std::unordered_map<std::string, double> atomic_masses = {
	{"H", 1.008000}, {"He", 4.003000}, {"Li", 6.939000}, {"Be", 9.012000}, 
	{"B", 10.811000}, {"C", 12.011000}, {"N", 14.007000}, {"O", 15.999000}, 
	{"F", 18.998000}, {"Ne", 20.183000}, {"Na", 22.990000}, {"Mg", 24.312000}, 
	{"Al", 26.982000}, {"Si", 28.086000}, {"P", 30.974000}, {"S", 32.064000}, 
	{"Cl", 35.453000}, {"Ar", 39.948000}, {"K", 39.102000}, {"Ca", 40.080000}, 
	{"Sc", 44.956000}, {"Ti", 47.900000}, {"V", 50.940000}, {"Cr", 52.000000}, 
	{"Mn", 54.940000}, {"Fe", 55.850000}, {"Co", 58.930000}, {"Ni", 58.710000}, 
	{"Cu", 63.540000}, {"Zn", 65.370000}, {"Ga", 69.720000}, {"Ge", 72.590000}, 
	{"As", 74.920000}, {"Se", 78.960000}, {"Br", 79.909000}, {"Kr", 83.800000}, 
	{"Rb", 85.470000}, {"Sr", 87.620000}, {"Y", 88.905000}, {"Zr", 91.220000}, 
	{"Nb", 92.906000}, {"Mo", 95.940000}, {"Tc", 99.000000}, {"Ru", 101.070000}, 
	{"Rh", 102.920000}, {"Pd", 106.400000}, {"Ag", 107.870000}, {"Cd", 112.400000}, 
	{"In", 114.820000}, {"Sn", 118.690000}, {"Sb", 121.750000}, {"Te", 127.600000}, 
	{"I", 126.904000}, {"Xe", 131.300000}, {"Cs", 132.905000}, {"Ba", 137.340000}, 
	{"La", 138.910000}, {"Ce", 140.120000}, {"Pr", 140.907000}, {"Nd", 144.240000}, 
	{"Pm", 147.000000}, {"Sm", 150.350000}, {"Eu", 151.960000}, {"Gd", 157.250000}, 
	{"Tb", 158.920000}, {"Dy", 162.500000}, {"Ho", 164.930000}, {"Er", 167.260000}, 
	{"Tm", 168.930000}, {"Yb", 173.040000}, {"Lu", 174.970000}, {"Hf", 178.490000}, 
	{"Ta", 180.950000}, {"W", 183.850000}, {"Re", 186.200000}, {"Ir", 190.200000}, 
	{"Ir", 192.200000}, {"Pt", 195.090000}, {"Au", 196.970000}, {"Hg", 200.590000}, 
	{"Tl", 204.370000}, {"Pb", 207.190000}, {"Bi", 208.980000}, {"Po", 210.000000}, 
	{"At", 211.000000}, {"Rn", 222.000000}, {"Fr", 223.000000}, {"Ra", 226.050000}, 
	{"Ac", 227.050000}, {"Th", 232.120000}, {"Pa", 231.050000}, {"U", 238.070000}, 
	{"Np", 237.000000}, {"Pu", 239.000000}, {"Am", 241.000000}, {"Cm", 242.000000}, 
	{"Bk", 243.000000}, {"Cf", 251.000000}, {"Es", 246.000000}, {"Fm", 250.000000}, 
	{"Md", 256.000000}, {"No", 254.000000}, {"Lr", 257.000000}, {"Rf", 267.000000}
};
#endif