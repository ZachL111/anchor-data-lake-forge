# Anchor Data Lake Forge Walkthrough

This walk-through keeps the domain vocabulary close to the data instead of burying it in prose.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | schema drift | 141 | ship |
| stress | lineage depth | 205 | ship |
| edge | partition skew | 181 | ship |
| recovery | quality gap | 222 | ship |
| stale | schema drift | 196 | ship |

Start with `recovery` and `baseline`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

The next useful expansion would be a malformed fixture around lineage depth and quality gap.
