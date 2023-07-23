# VectorMath
![Banner](https://repository-images.githubusercontent.com/668623518/ca919447-1b34-492c-85dc-3456f2303743)
Built by *XnipS*.

# About
Small library of vector functions for physics calculations.\
Strictly 2D currently.

# Functions
```VectorRoundToInt(Vector2* input, Vector2Int* output)```\
Converts a Vector2 to Vector2Int using std::floor.

```VectorMagnitude(Vector2* input, double* output)```\
Calculates the magnitude of the given vector.

```VectorDistance(Vector2* i, Vector2* j, double* output)```\
Gets the distance between two points.

```VectorSum(Vector2* output, Vector2* i, Vector2* j)```\
Sums two vectors together.

```VectorSubtract(Vector2* output, Vector2* i, Vector2* j)```\
Subtracts vector j from i.

```VectorMultiply(Vector2* output, Vector2* i, Vector2* j)```\
Multiplies both vectors together. 

```VectorScalarMultiply(Vector2* output, Vector2* input, double j)```\
Multiplies vector by a scalar.

```VectorScalarDivide(Vector2* output, Vector2* input, double j)```\
Divides vector by a scalar.

```VectorNormalise(Vector2* output) ```\
Normalises vector using magnitude.

``` Vector2 VectorSumScalar(Vector2* i, float j)```\
Sums vector by scalar (if component is positive) else subtracts vector by scalar.
