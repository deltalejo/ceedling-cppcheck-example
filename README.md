# Cppcheck Ceedling Example

Very simple project to illustrate the usage of the
[Cppcheck Plugin](https://github.com/deltalejo/cppcheck-ceedling-plugin).

**Note**: Cppcheck must be available in your path.

## Run analysis

### Whole project

```bash
ceedling cppcheck
```

### Single file

```bash
ceedling cppcheck:main
```

## Run tests

### All tests

```bash
ceedling test
```

### Single test

```bash
ceedling test:main
```
