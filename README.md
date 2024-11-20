# Cppcheck Ceedling Example

Very simple project to illustrate the usage of the
[Cppcheck Plugin](https://github.com/deltalejo/cppcheck-ceedling-plugin).

**Note**: Cppcheck must be available in your path.
_e.g.:_

*project.yml*

```yaml
:environment:
  - :path:
    - path/where/cppcheck/is/located
    - "#{ENV['PATH']}"
```

## Clone this repo

```shell
cd somewhere/in/your/machine
git clone --recursive https://github.com/deltalejo/ceedling-cppcheck-example.git
cd ceedling-cppcheck-example
```

## Run analysis

### Whole project

```shell
ceedling cppcheck
```

### Single file

```shell
ceedling cppcheck:main
```

## Run tests

### All tests

```shell
ceedling test
```

### Single test

```shell
ceedling test:main
```
