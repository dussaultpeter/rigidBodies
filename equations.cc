//headers, define equations for use in main()?
#include<stdio.h>
#include<iostream>
#include<math.h> //for trig functions

#define s	displacement
#define t	time
#define theta	angularDisplacement
#define phi	angle
#define r	radius
#define m	mass
#define I	momentOfInertia
#define cm	centerOfMass
#define v	linearVelocity
#define a	linearAcceleration
#define p	linearMomentum
#define J	linearImpulse
#define KE	linearKineticEnergy
#define F	force
#define av	angularVelocity
#define aa	angularAcceleration
#define L	angularMomentum
#define aI	angularImpulse
#define KER	angularKineticEnergy
#define tq	torque
//namespace?
//need instantaneous values
float current=2,f=2,i=1; //remove once finished
class Equations {
public:
template<typename T>
T dx(T x){
	return (xyt[n][3] - xyt[n][3]);
}

template<typename T>
T dt(T t){
	return (t[current] - t[current-1]);
}

template<typename T>
T linearVelocity( T ds, T dt){
	return  (ds/dt);
}

template<typename T>
T linearAcceleration( T v, T dt){
	return v/dt;
}

template<typename T>
T linearMomentum(T m, T v){
	return m*v;
}

template<typename T>
T linearImpulse(T m, T v){
	return m(v[f] - v[i]);
}
//only in the case of collisions is this useful.

template<typename T>
T linearKineticEnergy(T m, T v){
	return (1/2)*m*v*v;
}

template<typename T>
T force(T m, T v, T dt){
	return m*v/dt;
}

template<typename T>
T angularVelocity(T theta, T dt){
	return theta/dt;
}

template<typename T>
T angularAcceleration(T av, T dt){
	return av/dt;

}

template<typename T>
T angularMomentum(T I, T av){
	return I*av;
}

template<typename T>
T angularImpulse(T I, T av){
	return I(av[f] - av[i]);
}	

template<typename T>
T angularKineticEnergy(T I, T av){
	return (1/2)*I*av*av;
}

template<typename T>
T torque(T F, T d, T phi){
	return F*d*sin(phi);
}
//may need to include potential energy if going 3D
//remember to calc velocity (easy variables) first to save on computation time
//need to include center of mass
};
