CLion Conan Example: Use Conan packages in your project
=======================================================

This repository contains a Clion project with some Conan dependencies. 
Follow the [Clion integration guide](http://docs.conan.io/en/latest/integrations/clion.html)


Build the project with CLion
----------------------------

- Open this directory with CLion => File => Open.

- Install the project dependencies:

    - Go to ``cmake-build-debug`` folder and run:

      ```
          conan install ../ -s build_type=Debug
   
      ```

  It will install the **libpng** and **zlib** requirements and will generate a **conanbuildinfo.cmake** file. Repeat the process for the
  different build configurations specifing the settings accordingly.
  
  Now you can inspect/debug the **zlib.h** and **png.h** files, it will point to your conan local cache.
  
  
- Build with the CLion IDE normally.
