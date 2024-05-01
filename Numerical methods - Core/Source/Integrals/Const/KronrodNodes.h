#pragma once

namespace NumericalMethods::Integrals::Kronrod
{
	static const double nodes[] =
	{
		-0.9956571630258080807355273,
		-0.9739065285171717200779640,
		-0.9301574913557082260012072,
		-0.8650633666889845107320967,
		-0.7808177265864168970637176,
		-0.6794095682990244062343274,
		-0.5627571346686046833390001,
		-0.4333953941292471907992659,
		-0.2943928627014601981311266,
		-0.1488743389816312108848260,
		0.0,
		0.1488743389816312108848260,
		0.2943928627014601981311266,
		0.4333953941292471907992659,
		0.5627571346686046833390001,
		0.6794095682990244062343274,
		0.7808177265864168970637176,
		0.8650633666889845107320967,
		0.9301574913557082260012072,
		0.9739065285171717200779640,
		0.9956571630258080807355273
	};

	static const double weights[] =
	{
		0.0116946388673718742780644,
		0.0325581623079647274788190,
		0.0547558965743519960313813,
		0.0750396748109199527670431,
		0.0931254545836976055350655,
		0.1093871588022976418992106,
		0.1234919762620658510779581,
		0.1347092173114733259280540,
		0.1427759385770600807970943,
		0.1477391049013384913748415,
		0.1494455540029169056649365,
		0.1477391049013384913748415,
		0.1427759385770600807970943,
		0.1347092173114733259280540,
		0.1234919762620658510779581,
		0.1093871588022976418992106,
		0.0931254545836976055350655,
		0.0750396748109199527670431,
		0.0547558965743519960313813,
		0.0325581623079647274788190,
		0.0116946388673718742780644
	};
}// NumericalMethods::Integrals::KronrodNodes
