#include "HarmonicSeries.h"

const SeriesPtr DefineHarmonicSeriesArray (const int size){ // const float* func(const int size)
    if (size <= 0) 
        return nullptr;

    int num = 1.;
    float *tab = new float[size];
    for(unsigned int i = 0; i < size; i++){
        tab[i] = 1./(num);
        // std::cout << num << "\n";
        // std::cout << std::fixed << std::setprecision(2) << "tab[" << i << "] = " << tab[i] << std::endl ;  
        num++;
    }
    return tab;
}

void  PrintSeries(const SeriesPtr tab, Size size){
    for(unsigned int i = 0; i < size; i++){
        std::cout << std::fixed << std::setprecision(2) << tab[i] << " ";
    }
    std::cout << std::endl;
}

SeriesType SeriesSum(const SeriesPtr tab, Size size){
    SeriesType sum = 0.;
    for(unsigned int i = 0; i < size; i++){
        sum += tab[i];
    }
    printf("Suma: ");
    return sum;
}


//sciagniete///////////////////////////////////////////////////////
SeriesType SeriesProduct(const SeriesPtr series, Size seriesSize){
  SeriesType product = 1;
  for(int i=0; i<seriesSize; i++)
  {
    product *= series[i];
  }
  printf("Product: ");
  return product;
}

SeriesType SeriesMax(const SeriesPtr series, Size seriesSize)
{
  SeriesPtr maxEl = (SeriesPtr)series;
  for(int i=0; i<seriesSize; i++)
  {
    if(*maxEl<series[i])
    {
      maxEl = (SeriesPtr)series + i;
    }
  }
  printf("Maximum: ");
  return *maxEl;
}

SeriesType SeriesMin(const SeriesPtr series, Size seriesSize)
{
    SeriesPtr minEl = (SeriesPtr)series;
  for(int i=0; i<seriesSize; i++)
  {
    if(*minEl>series[i])
    {
      minEl = (SeriesPtr)series + i;
    }
  }
  printf("Minimum: ");
  return *minEl;
}

void RunAndPrint (SeriesFunctionPtr func, const SeriesPtr tablica, Size size){
    SeriesType temp = func(tablica,size);
    // func(tablica,size);
    std::cout << std::fixed << std::setprecision(4)<< temp << std::endl;
}

void DeleteSeries(const SeriesPtr tab){
    delete []tab;
}