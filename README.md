# 3DCurves
Небольшая программа на C++, реализующая иерархию трехмерных кривых.

### Несколько слов о сборке:
Реализация включает исходный код статической библиотеки Primitives,
динамической библиотеки 3DCurves,
а также исполняемого файла Test.

Проектные файлы VS для x86 Debug/Release версий настроены так, 
что, если собирать решения в таком порядке, 
не забыв после создания файла 3DCurves.dll добавить его в директорию Test,
то никаких дополнительных настроек делать будет не нужно.
