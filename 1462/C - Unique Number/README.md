<h2><a href="https://codeforces.com/contest/1462/problem/C" target="_blank" rel="noopener noreferrer">1462C — Unique Number</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1462C](https://codeforces.com/contest/1462/problem/C) |

## Topics
`brute force` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Unique Number</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a positive number <span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-1"><span class="MJXp-mi MJXp-italic" id="MJXp-Span-2">x</span></span></span>$x$. Find the smallest positive integer number that has the sum of digits equal to <span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-3"><span class="MJXp-mi MJXp-italic" id="MJXp-Span-4">x</span></span></span>$x$ and all digits are <span class="tex-font-style-bf">distinct</span> (unique).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single positive integer <span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-5"><span class="MJXp-mi MJXp-italic" id="MJXp-Span-6">t</span></span></span>$t$ (<span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-7"><span class="MJXp-mn" id="MJXp-Span-8">1</span><span class="MJXp-mo" id="MJXp-Span-9" style="margin-left: 0.333em; margin-right: 0.333em;">≤</span><span class="MJXp-mi MJXp-italic" id="MJXp-Span-10">t</span><span class="MJXp-mo" id="MJXp-Span-11" style="margin-left: 0.333em; margin-right: 0.333em;">≤</span><span class="MJXp-mn" id="MJXp-Span-12">50</span></span></span>$1 \le t \le 50$) — the number of test cases in the test. Then <span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-13"><span class="MJXp-mi MJXp-italic" id="MJXp-Span-14">t</span></span></span>$t$ test cases follow.</p><p>Each test case consists of a single integer number <span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-15"><span class="MJXp-mi MJXp-italic" id="MJXp-Span-16">x</span></span></span>$x$ (<span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-17"><span class="MJXp-mn" id="MJXp-Span-18">1</span><span class="MJXp-mo" id="MJXp-Span-19" style="margin-left: 0.333em; margin-right: 0.333em;">≤</span><span class="MJXp-mi MJXp-italic" id="MJXp-Span-20">x</span><span class="MJXp-mo" id="MJXp-Span-21" style="margin-left: 0.333em; margin-right: 0.333em;">≤</span><span class="MJXp-mn" id="MJXp-Span-22">50</span></span></span>$1 \le x \le 50$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output <span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-23"><span class="MJXp-mi MJXp-italic" id="MJXp-Span-24">t</span></span></span>$t$ answers to the test cases:</p><ul> <li> if a positive integer number with the sum of digits equal to <span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-25"><span class="MJXp-mi MJXp-italic" id="MJXp-Span-26">x</span></span></span>$x$ and all digits are different exists, print the smallest such number; </li><li> otherwise print <span class="tex-font-style-tt">-1</span>. </li></ul></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id001047427209274473" id="id00838237764793751" class="input-output-copier">Copy</div></div><pre id="id001047427209274473">4
1
5
15
50
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008455507695164365" id="id006522066680208548" class="input-output-copier">Copy</div></div><pre id="id008455507695164365">1
5
69
-1
</pre></div></div></div>