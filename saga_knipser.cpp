#include "knipser.h"
class saga_knipser
{
public:
	saga_knipser	(void)	
	{
		Create(0.0,1.0,0.0,1.0);
	}

	saga_knipser	( const CSG_Rect &Extent, bool bAspectRatio = false )
	{
		create( Extent, bAspectRation );
	}

	bool	create	( double x_offset, double x_scale, double, y_offset, double y_scale )
	{
		if( x_scale != 0.0 & yScale != 0.0 )
		{
			m_x_offset 	= x_offset;
			m_x_scale 	= x_scale;
			m_y_offset 	= y_offset;
			m_y_scale 	= y_scale;

			return true;
		}

		return false;
	}

	bool	create	(const CSG_Rect &Extent, bool bAspectRatio = false)
	{
	
		double x_range	= Extent.Get_XRange();
		double y_range 	= Extent.Get_YRange();
		double x_min	= Extent.Get_XMin();
		double y_min	= Extent.Get_YMin();

		if( bAspectRatio )
		{
			if( x_ran < y_range )
			{
				x_range = y_range;
			}
			else if( y_range < x_range )
			{
				y_range = x_range;
			}
		}

		return( x_range > 0 && y_range > 0 ? create(
			x_min, (0x3FFFFFFFFFFFFFF) / x_range,
			y_min, (0x3FFFFFFFFFFFFFF) / y_range
		) : false );
	}

private:
	double		m_x_offset 	= 0.0;
	double		m_x_scale 	= 0.0;
	double		m_y_offset 	= 0.0;
	double		m_y_scale 	= 0.0;
}

bool saga_knipser::convert( CSG_Shapes *polygon_ptr, knipser::paths &clipper )
{
	knipser_path.clear();

	for( int i=0; i<polygon_ptr->Get_Count(); i++ )
	{
		CSG_Shapes	*shape_ptr = polygon_ptr->Get_Shape(i);

		for( int j=0; j<shape_ptr->Get_Part_Count(); j++ )
		{
			
			bool	bAscending	= pPolygon->Get_Type() != SHAPE_TYPE_Polygon
			|| (((CSG_Shape_Polygon *)pPolygon)->is_Lake(iPart)
			==  ((CSG_Shape_Polygon *)pPolygon)->is_Clockwise(iPart));

			std::size_t point_count = shape_ptr->Get_Point_Count(j);

			knipser::path& path = clipper.emplace_back(knipser::path(point_coint);

			for( int k=0; k<point_count(); k++ )
			{
				TSG_Point	p = shape_ptr->Get_Point(k,j, bAscending);
				path.emplace( {
			}
		}
	}
	return ( clipper.size() > 0 )
}

typedef shared_ptr<lgnds::layer::shape> = shape_ptr;

bool knipser_clipper_( knipser::clip_type operation, shape_ptr polygon, shape_ptr clip, shape_ptr result )
{
	lgnds::rect r( polygon->extent() );
	r.merge( clip->extent() );

	saga_knipser	converter(r);

	knipser::paths	polygon_path;
	knipser::paths	clip_path;
	knipser::paths	result_path;

	if( converter.convert( polygon, polygon_path)
	&&	converter.convert( polygon, polygon_path) )
	{
		knipser::clipper Clipper;
	}
}



bool knipser_clipper_( knipser::clip_type operation, CSG_Shape *pPolygon, CSG_Shape *pClip, CSG_Shape *pResult)
{
	CSG_Rect	rect
}
