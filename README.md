# C-study

C/C++ Study

## MAC launch.json

```
{
  // 使用 IntelliSense 了解相关属性。
  // 悬停以查看现有属性的描述。
  // 欲了解更多信息，请访问: https://go.microsoft.com/fwlink/?linkid=830387
  "version": "0.2.0",
  "configurations": [
    {
      "name": "C++调试",
      "type": "cppdbg",
      "request": "launch",
      "program": "${fileDirname}/${fileBasenameNoExtension}",
      "args": [],
      "stopAtEntry": false,
      "cwd": "${fileDirname}",
      "environment": [],
      "externalConsole": true,
      "MIMode": "lldb",
      "preLaunchTask": "C/C++: clang++ 生成活动文件"
    },
    {
      "name": "C调试",
      "type": "cppdbg",
      "request": "launch",
      "program": "${fileDirname}/${fileBasenameNoExtension}",
      "args": [],
      "stopAtEntry": false,
      "cwd": "${fileDirname}",
      "environment": [],
      "externalConsole": true,
      "MIMode": "lldb",
      "preLaunchTask": "C/C++: clang 生成活动文件"
    }
  ]
}
```

## MAC tasks.json

```
{
	"version": "2.0.0",
	"tasks": [
		{
			"type": "cppbuild",
			"label": "C/C++: clang++ 生成活动文件",
			"command": "/usr/bin/clang++",
			"args": [
				"-fcolor-diagnostics",
				"-fansi-escape-codes",
				"-g",
				"${file}",
				"-o",
				"${fileDirname}/${fileBasenameNoExtension}"
			],
			"options": {
				"cwd": "${fileDirname}"
			},
			"problemMatcher": [
				"$gcc"
			],
			"group": "build",
			"detail": "编译器: /usr/bin/clang++"
		},
		{
			"type": "cppbuild",
			"label": "C/C++: clang 生成活动文件",
			"command": "/usr/bin/clang",
			"args": [
				"-fcolor-diagnostics",
				"-fansi-escape-codes",
				"-g",
				"${file}",
				"-o",
				"${fileDirname}/${fileBasenameNoExtension}"
			],
			"options": {
				"cwd": "${fileDirname}"
			},
			"problemMatcher": [
				"$gcc"
			],
			"group": "build",
			"detail": "编译器: /usr/bin/clang"
		}
	]
}
```

## MAC setting.json

> 路径修改为自己的

```
{
  "code-runner.executorMap": {
    "c": "cd $dir && gcc $fileName -o /Users/zhouyanwei/Desktop/work/other/C++/build/$fileNameWithoutExt && /Users/zhouyanwei/Desktop/work/other/C++/build/$fileNameWithoutExt",
    "cpp": "cd $dir && g++ $fileName -o /Users/zhouyanwei/Desktop/work/other/C++/build/$fileNameWithoutExt && /Users/zhouyanwei/Desktop/work/other/C++/build/$fileNameWithoutExt"
  }
}


```

## WIN setting.json

> 路径修改为自己的

```
{
  "code-runner.executorMap": {
    "c": "chcp 65001 && cd $dir && gcc $fileName -o D:\\code\\C-study\\Build\\$fileNameWithoutExt && D:\\code\\C-study\\Build\\$fileNameWithoutExt",
    "cpp": "chcp 65001 && cd $dir && g++ $fileName -o D:\\code\\C-study\\Build\\$fileNameWithoutExt && D:\\code\\C-study\\Build\\$fileNameWithoutExt"
  }
}

```
