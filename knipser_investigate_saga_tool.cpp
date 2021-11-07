#include "knipser_investigate_saga_tool.h"

knipser_investigation::knipser_investigation(void)
{
	Set_Name (_TL("Create Profile Lines"));
	
	Set_Author(_TL("\u00a9 Justus Spitzmüller"));
	
	Set_Description (_TW(
		"Tool is for investigation in the debugging how saga (i know saga) and ClipperLibs work"
		)
	);
	
	Set_Version( "1.0" );
	
	
	Parameters.Add_Shapes(
		NULL , "INPUT" , _TL("Input Polygon") , _TL("Input Polygon Shapefile"),
		PARAMETER_INPUT , SHAPE_TYPE_Polygon
	);

	Parameters.Add_Shapes(
		NULL , "OUTPUT" , _TL("Output Polygon") , _TL("Output Polygon Shapefile") , 
		PARAMETER_OUTPUT , SHAPE_TYPE_Line
	);

}
	
knipser_investigation::~knipser_investigation(void)
{}

int knipser_investigation::On_Parameters_Enable(CSG_Parameters *pParameters, CSG_Parameter *pParameter)
{
	return( CSG_Tool::On_Parameters_Enable(pParameters, pParameter) );
}

bool knipser_investigation::On_Execute(void)
{
	CSG_Shapes	*input_ptr 	= Parameters("INPUT")->asShapes();
	CSG_Shapes	*output_ptr = Parameters("OUTPUT")->asShapes();

	

	return true;
}

