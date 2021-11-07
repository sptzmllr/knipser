namespace knipser{

enum clip_type { overlapping, inclusive, difference, exclusive };
enum poly_type { subject, clip };
enum poly_fill_type { even_odd, non_zero, positive, negative };

template<typename T>
struct point
{
	T x;
	T y;
};

template<typename T>
struct point_z
{
	T x;
	T y;
	T z;
};

}
