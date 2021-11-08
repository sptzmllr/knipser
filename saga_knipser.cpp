

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
