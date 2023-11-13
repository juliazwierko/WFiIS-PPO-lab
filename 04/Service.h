#include "Car.h"

class Service {
public:
    /** @brief Sprawdzenie kopi pojazdu
    *
    * Test serwisowy dla skopiowanego pojazdu
    *
    * @param[in] car pojazd
    * @param[in] distance dystans do przejechania
    * @return funkcja nic nie zwraca
    */
    void TestCopy(Car car, int distance);

    /** @brief Sprawdzenie pojazdu
    *
    * Test serwisowy dla pojazdu
    *
    * @param[in] pcar wskaznik do pojazdu
    * @param[in] distance dystans do przejechania
    * @return funkcja nic nie zwraca
    */
    void Test(Car * pcar, int distance);
};

/** @brief Sprawdzenie pojazdu
*
* Test serwisowy dla pojazdu
*
* @param[in] pcar wskaznik do pojazdu
* @param[in] distance dystans do przejechania
* @return funkcja nic nie zwraca
*/
void TestCar(Car *pcar, int distance);
