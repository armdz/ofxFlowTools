
#pragma once

#include "ofMain.h"
#include "ftAreaAverage.h"

namespace flowTools {
	
	class ftAreaAverage2f : public ftAreaAverage {
	public:
		ftAreaAverage2f(){ ; }
		virtual	~ftAreaAverage2f() { ; }
		
		void		setup(int _width = 32, int _height = 32, string _name = "");
		void		update();
		
		ofVec2f		getDirection()			{ return direction; }
		ofVec2f		getTotalVelocity()		{ return totalVelocity; }
		vector<ofVec2f>& getVelocities()	{ return velocities; }
		
	private:
		ofVec2f					direction;
		ofVec2f					totalVelocity;
		ofParameter<ofVec2f>	pDirection;
		vector<ofVec2f>			velocities;
		
		void allocate(int _width, int _height) ;

		void pRoiXListener(float& _value)		{ ftAreaAverage::pRoiXListener(_value); }
		void pRoiYListener(float& _value)		{ ftAreaAverage::pRoiYListener(_value); }
	};
}
