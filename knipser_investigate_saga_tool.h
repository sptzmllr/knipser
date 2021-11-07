#pragma once

#include <saga_api/saga_api.h>

class knipser_investigation : public CSG_Tool
{
public:
	
	knipser_investigation (void);
	virtual ~knipser_investigation (void);
	
protected:
	
	virtual bool On_Execute(void);
	int On_Parameters_Enable(CSG_Parameters *pParameters, CSG_Parameter *pParameter);
	
private:
	
};
