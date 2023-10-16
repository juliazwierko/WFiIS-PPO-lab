#pragma once 
#include <iostream>
#include <iomanip>

#define Size int
#define SeriesPtr float*
#define SeriesType float 
typedef SeriesType(*SeriesFunctionPtr)(const SeriesPtr, Size);

const SeriesPtr DefineHarmonicSeriesArray (const int size);

void  PrintSeries(const SeriesPtr tab, Size size);

SeriesType SeriesSum(const SeriesPtr tab, Size size);
SeriesType SeriesProduct(const SeriesPtr series, Size seriesSize);
SeriesType SeriesMax(const SeriesPtr series, Size seriesSize);
SeriesType SeriesMin(const SeriesPtr series, Size seriesSize);

void RunAndPrint (SeriesFunctionPtr func, const SeriesPtr tablica, Size size);

void DeleteSeries(const SeriesPtr tab);