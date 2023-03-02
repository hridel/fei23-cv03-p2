# Příklad 2 - pole, konstanta

Zadefinujte konstantu `ARRAY_SIZE` o hodnotě `5` (pomocí makra), definujte statické pole o velikosti `ARRAY_SIZE`.

- Načtěte prvky do pole
  - z klávesnice
  - z generátoru
- Vypište prvky pole
- Najděte Max/Min a jejich indexy → informace uložte do příslušných proměnných a vypište.
- Prohoďte Max s Min a vypište pole
- Pro načtení a výpis použijte oba ekvivalentní způsoby
  - `pole[i] == *(pole + i)`
  - `&pole[i] == pole + i`
- Vypište velikost pole a kontrolní počet prvků v poli. Pomocí funkce `sizeof()`