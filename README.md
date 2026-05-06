# anchor-data-lake-forge

`anchor-data-lake-forge` is a compact C++ repository for data engineering, centered on this goal: Build a C++ toolkit that studies lake behavior through framed sample traffic, with bounds and ordering tests and bounded memory input sets.

## Reason For The Project

The point is to make a small domain rule concrete enough that a reader can change it and immediately see what broke.

## Anchor Data Lake Forge Review Notes

The first comparison I would make is `quality gap` against `schema drift` because it shows where the rule is most opinionated.

## What It Does

- `fixtures/domain_review.csv` adds cases for schema drift and lineage depth.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/anchor-data-lake-walkthrough.md` walks through the case spread.
- The C++ code includes a review path for `quality gap` and `schema drift`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## How It Is Put Together

The repository has two validation layers: the original compact policy fixture and the domain review fixture. They are separate so one can change without hiding failures in the other.

The C++ addition stays small enough to inspect in one sitting.

## Run It

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Check It

The same command runs the local verification path. The highest-scoring domain case is `recovery` at 222, which lands in `ship`. The most cautious case is `baseline` at 141, which lands in `ship`.

## Boundaries

The fixture set is small enough to audit by hand. The next useful expansion is malformed input coverage, not extra surface area.
