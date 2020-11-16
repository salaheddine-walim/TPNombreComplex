#include "Complex.h"

//Constructeur d+initialisation a 0;
Complex::Complex()
{
	this->im = 0.0;
	this->re = 0.0;
}

// Contructeur avec parametres
Complex::Complex(double re, double im)
{
	this->im = im;
	this->re = re;
}

//Affichage avec Test
void Complex::print()
{
	if(this->im > 0)
		cout << "(" << this->re << "+i" << this->im << ")"<< endl;
	else
		cout << "(" << this->re << "-i" << -(this->im) << ")" << endl;
}

// Methode pour calculer le module
double Complex::module()
{
	return sqrt(pow(this->re,2)+pow(this->im,2));
}

// La methode qui retourne le conjugue
Complex Complex::conjugue()
{
	Complex res;
	res.re=this->re;
	res.im = -this->im;
	return res;
}

//Surcharge d'operateur ==
bool Complex::operator==(const Complex &c)
{
	return this->re==c.re && this->im==c.im;
}

//Surchage 1 d'operateur + 
Complex Complex::operator+(const Complex &c)
{
	Complex res;
	res.re = this->re + c.re;
	res.im = this->im + c.im;
	return res;
}

//surcharge 2 d'operateur + 
Complex Complex::operator+(double d)
{
	Complex res;
	res.re = this->re + d;
	res.im = this->im;
	return res ;
}
//surcharge d'operateur *
Complex Complex::operator*(const Complex& c)
{
	Complex res;
	res.re = (this->re * re) - (this->im * c.im);
	res.im = (this->re * c.im) + (this->im * c.re);
	return res;
}

// Destructeur
//Complex::~Complex()
//{
//	delete this;
//}
