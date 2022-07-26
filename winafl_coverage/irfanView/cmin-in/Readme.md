# Optimized input corpus using winafl-cmin.py
## Created by
```bash
python winafl-cmin.py --working-dir C:\Users\johan\winafl\build\bin\Release -w 3 -i C:\Users\johan\code\irfanview\samples -o C:\Users\johan\code\irfanview\cmin_in -t 4000 -D C:\Users\johan\DynamoRIO-Windows-9.0.19188\bin32 -covtype edge -target_module "i_view32.exe" -coverage_module "i_view32.exe" -target_offset 0x85130 -nargs 1 -- "C:\Program Files (x86)\IrfanView\i_view32.exe" @@ /convert="NUL" /silent
```

## Original input corpus
- samples in [Github](https://github.com/moshekaplan/FuzzImageMagick)
