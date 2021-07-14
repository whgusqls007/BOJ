<div id="problem-body">
			<div class="col-md-12">
				<section id="description" class="problem-section">
				<div class="headline">
				<h2>문제</h2>
				</div>
				<div id="problem_description" class="problem-text">
				<p>경래는 닭을 기르는데 올 겨울 달걀 풍년으로 함박 웃음을 짓고 있다. 그리고 이 달걀을 영양란으로 둔갑하여 옥션에 판매하려한다.</p>

<p>경래는 총 N개의 달걀이 있고, 그의 잠재적인 고객은 총 M명이다. 그리고 각각의 i번째 고객은 각자 달걀 하나를 P<sub>i</sub> 가격 이하로 살 수 있다고 밝혔다.</p>

<p>경래는 영양란이라 속인 죄책감에 한 고객에게 두 개 이상의 달걀은 팔지 않기로 하였다. 하지만 위의 규칙 하에 수익은 최대로 올리고 싶기에 얼마로 팔지 고민하고 있다. 즉, A가격에 달걀을 판다고 하면 P<sub>i</sub>가 A가격보다 크거나 같은&nbsp;모든 고객은 달걀을 산다는 뜻이다. (물론 달걀 총 수량을 초과하여 팔 수 는 없다)</p>

<p>문제는 이러한 경래를 도와 최대 수익을 올릴 수 있는 달걀의 가장 낮은 가격을 책정하는 것이다.</p>
				</div>
				</section>
			</div>
										<div class="col-md-12">
					<section id="input" class="problem-section">
					<div class="headline">
					<h2>입력</h2>
					</div>
					<div id="problem_input" class="problem-text">
					<p>첫째 줄에 정수 N(1≤N≤1,000)과 M(1≤M≤1,000)이 입력된다. 둘째 줄부터 M+1번째 줄까지 i+1번째 줄에는 P<sub>i</sub>(1≤P<sub>i</sub>≤1,000,000)가 입력된다.</p>
					</div>
					</section>
				</div>
				<div class="col-md-12">
					<section id="output" class="problem-section">
					<div class="headline">
					<h2>출력</h2>
					</div>
					<div id="problem_output" class="problem-text">
					<p>첫째 줄에 경래가 책정한 가격과 이 가격으로 올릴 수 있는 수익을 출력한다.</p>
					</div>
					</section>
				</div>
						<div class="col-md-12">
			<section id="limit" style="display:none;" class="problem-section">
			<div class="headline">
			<h2>제한</h2>
			</div>
			<div id="problem_limit" class="problem-text">
						</div>
			</section>
			</div>
																	<div class="col-md-12">
				<div class="row">
					<div class="col-md-6">
						<section id="sampleinput1">
						<div class="headline">
						<h2>예제 입력 1
						</h2>
						</div>
						<pre class="sampledata" id="sample-input-1">5 4
2
8
10
7
</pre>
						</section>
					</div>
					<div class="col-md-6">
						<section id="sampleoutput1">
						<div class="headline">
						<h2>예제 출력 1
						</h2>
						</div>
						<pre class="sampledata" id="sample-output-1">7 21
</pre>
						</section>
					</div>
									</div>
				</div>
										<div class="col-md-12">
				<section id="hint" style="display: none;" class="problem-section">
				<div class="headline">
				<h2>힌트</h2>
				</div>
				<div id="problem_hint" class="problem-text">
				</div>
				</section>
			</div>
							<div style="display: none;">
					<div id="problem-lang-base64">W3sicHJvYmxlbV9pZCI6IjEyNDYiLCJwcm9ibGVtX2xhbmciOiIwIiwidGl0bGUiOiJcdWM2MjhcdWI3N2NcdWM3NzggXHVkMzEwXHViOWU0IiwiZGVzY3JpcHRpb24iOiI8cD5cdWFjYmRcdWI3OThcdWIyOTQgXHViMmVkXHVjNzQ0IFx1YWUzMFx1Yjk3NFx1YjI5NFx1YjM3MCBcdWM2MmMgXHVhY2E4XHVjNmI4IFx1YjJlY1x1YWM0MCBcdWQ0OGRcdWIxNDRcdWM3M2NcdWI4NWMgXHVkNTY4XHViYzE1IFx1YzZjM1x1Yzc0Y1x1Yzc0NCBcdWM5ZDNcdWFjZTAgXHVjNzg4XHViMmU0LiBcdWFkZjhcdWI5YWNcdWFjZTAgXHVjNzc0IFx1YjJlY1x1YWM0MFx1Yzc0NCBcdWM2MDFcdWM1OTFcdWI3ODBcdWM3M2NcdWI4NWMgXHViNDU0XHVhYzExXHVkNTU4XHVjNWVjIFx1YzYyNVx1YzE1OFx1YzVkMCBcdWQzMTBcdWI5ZTRcdWQ1NThcdWI4MjRcdWQ1NWNcdWIyZTQuPFwvcD5cclxuXHJcbjxwPlx1YWNiZFx1Yjc5OFx1YjI5NCBcdWNkMWQgTlx1YWMxY1x1Yzc1OCBcdWIyZWNcdWFjNDBcdWM3NzQgXHVjNzg4XHVhY2UwLCBcdWFkZjhcdWM3NTggXHVjN2EwXHVjN2FjXHVjODAxXHVjNzc4IFx1YWNlMFx1YWMxZFx1Yzc0MCBcdWNkMWQgTVx1YmE4NVx1Yzc3NFx1YjJlNC4gXHVhZGY4XHViOWFjXHVhY2UwIFx1YWMwMVx1YWMwMVx1Yzc1OCBpXHViYzg4XHVjOWY4IFx1YWNlMFx1YWMxZFx1Yzc0MCBcdWFjMDFcdWM3OTAgXHViMmVjXHVhYzQwIFx1ZDU1OFx1YjA5OFx1Yjk3YyBQPHN1Yj5pPFwvc3ViPiBcdWFjMDBcdWFjYTkgXHVjNzc0XHVkNTU4XHViODVjIFx1YzBiNCBcdWMyMTggXHVjNzg4XHViMmU0XHVhY2UwIFx1YmMxZFx1ZDYxNFx1YjJlNC48XC9wPlxyXG5cclxuPHA+XHVhY2JkXHViNzk4XHViMjk0IFx1YzYwMVx1YzU5MVx1Yjc4MFx1Yzc3NFx1Yjc3YyBcdWMxOGRcdWM3NzggXHVjOGM0XHVjYzQ1XHVhYzEwXHVjNWQwIFx1ZDU1YyBcdWFjZTBcdWFjMWRcdWM1ZDBcdWFjOGMgXHViNDUwIFx1YWMxYyBcdWM3NzRcdWMwYzFcdWM3NTggXHViMmVjXHVhYzQwXHVjNzQwIFx1ZDMxNFx1YzljMCBcdWM1NGFcdWFlMzBcdWI4NWMgXHVkNTU4XHVjNjAwXHViMmU0LiBcdWQ1NThcdWM5YzBcdWI5Y2MgXHVjNzA0XHVjNzU4IFx1YWRkY1x1Y2U1OSBcdWQ1NThcdWM1ZDAgXHVjMjE4XHVjNzc1XHVjNzQwIFx1Y2Q1Y1x1YjMwMFx1Yjg1YyBcdWM2MmNcdWI5YWNcdWFjZTAgXHVjMmY2XHVhZTMwXHVjNWQwIFx1YzViY1x1YjljOFx1Yjg1YyBcdWQzMTRcdWM5YzAgXHVhY2UwXHViYmZjXHVkNTU4XHVhY2UwIFx1Yzc4OFx1YjJlNC4gXHVjOTg5LCBBXHVhYzAwXHVhY2E5XHVjNWQwIFx1YjJlY1x1YWM0MFx1Yzc0NCBcdWQzMTBcdWIyZTRcdWFjZTAgXHVkNTU4XHViYTc0IFA8c3ViPmk8XC9zdWI+XHVhYzAwIEFcdWFjMDBcdWFjYTlcdWJjZjRcdWIyZTQgXHVkMDZjXHVhYzcwXHViMDk4IFx1YWMxOVx1Yzc0MCZuYnNwO1x1YmFhOFx1YjRlMCBcdWFjZTBcdWFjMWRcdWM3NDAgXHViMmVjXHVhYzQwXHVjNzQ0IFx1YzBiMFx1YjJlNFx1YjI5NCBcdWI3M2JcdWM3NzRcdWIyZTQuIChcdWJiM2NcdWI4NjAgXHViMmVjXHVhYzQwIFx1Y2QxZCBcdWMyMThcdWI3YzlcdWM3NDQgXHVjZDA4XHVhY2ZjXHVkNTU4XHVjNWVjIFx1ZDMxNCBcdWMyMTggXHViMjk0IFx1YzVjNlx1YjJlNCk8XC9wPlxyXG5cclxuPHA+XHViYjM4XHVjODFjXHViMjk0IFx1Yzc3NFx1YjdlY1x1ZDU1YyBcdWFjYmRcdWI3OThcdWI5N2MgXHViM2M0XHVjNjQwIFx1Y2Q1Y1x1YjMwMCBcdWMyMThcdWM3NzVcdWM3NDQgXHVjNjJjXHViOWI0IFx1YzIxOCBcdWM3ODhcdWIyOTQgXHViMmVjXHVhYzQwXHVjNzU4IFx1YWMwMFx1YzdhNSBcdWIwYWVcdWM3NDAgXHVhYzAwXHVhY2E5XHVjNzQ0IFx1Y2M0NVx1YzgxNVx1ZDU1OFx1YjI5NCBcdWFjODNcdWM3NzRcdWIyZTQuPFwvcD5cclxuIiwiaW5wdXQiOiI8cD5cdWNjYWJcdWM5ZjggXHVjOTA0XHVjNWQwIFx1YzgxNVx1YzIxOCBOKDEmbGU7TiZsZTsxLDAwMClcdWFjZmMgTSgxJmxlO00mbGU7MSwwMDApXHVjNzc0IFx1Yzc4NVx1YjgyNVx1YjQxY1x1YjJlNC4gXHViNDU4XHVjOWY4IFx1YzkwNFx1YmQ4MFx1ZDEzMCBNKzFcdWJjODhcdWM5ZjggXHVjOTA0XHVhZTRjXHVjOWMwIGkrMVx1YmM4OFx1YzlmOCBcdWM5MDRcdWM1ZDBcdWIyOTQgUDxzdWI+aTxcL3N1Yj4oMSZsZTtQPHN1Yj5pPFwvc3ViPiZsZTsxLDAwMCwwMDApXHVhYzAwIFx1Yzc4NVx1YjgyNVx1YjQxY1x1YjJlNC48XC9wPlxyXG4iLCJvdXRwdXQiOiI8cD5cdWNjYWJcdWM5ZjggXHVjOTA0XHVjNWQwIFx1YWNiZFx1Yjc5OFx1YWMwMCBcdWNjNDVcdWM4MTVcdWQ1NWMgXHVhYzAwXHVhY2E5XHVhY2ZjIFx1Yzc3NCBcdWFjMDBcdWFjYTlcdWM3M2NcdWI4NWMgXHVjNjJjXHViOWI0IFx1YzIxOCBcdWM3ODhcdWIyOTQgXHVjMjE4XHVjNzc1XHVjNzQ0IFx1Y2Q5Y1x1YjgyNVx1ZDU1Y1x1YjJlNC48XC9wPlxyXG4iLCJoaW50IjoiIiwib3JpZ2luYWwiOiIwIiwiaHRtbF90aXRsZSI6IjAiLCJwcm9ibGVtX2xhbmdfdGNvZGUiOiJLb3JlYW4ifSx7InByb2JsZW1faWQiOiIxMjQ2IiwicHJvYmxlbV9sYW5nIjoiMSIsInRpdGxlIjoiR29pbmcgT25jZSwgR29pbmcgVHdpY2UsIEdvbmUhIiwiZGVzY3JpcHRpb24iOiI8cD5UaGUgY293cyYjMzk7IHNsaW1taW5nIGRpZXQgaGFzIGxlZnQgRmFybWVyIEpvaG4gd2l0aCBleHRyYSBoYXkgc28gaGUgaGFzIGRlY2lkZWQgdG8gaG9sZCBhbiBhdWN0aW9uIHRvIHJlZHVjZSBoaXMgaW52ZW50b3J5LiBIZSBoYXMgTiAoMSAmbHQ7PSBOICZsdDs9IDEsMDAwKSBpZGVudGljYWwgbG90cyAoZWFjaCBvZiBhYm91dCAxMDAgYmFsZXMpIG9mIGhheTsgaGlzIHBvdGVudGlhbCBjdXN0b21lcnMgY29tcHJpc2UgTSAoMSAmbHQ7PSBNICZsdDs9IDEsMDAwKSBvdGhlciBmYXJtZXJzIGluIHRoZSBhcmVhLjxcL3A+XHJcblxyXG48cD5FYWNoIGZhcm1lciBpIHRlbGxzIEZhcm1lciBKb2huIGhvdyBtdWNoIGhlIGlzIHdpbGxpbmcgdG8gcGF5IFBfaSAoMSAmbHQ7PSBQX2kgJmx0Oz0gMSwwMDAsMDAwKSBmb3IgYSBsb3Qgb2YgaGF5LiBFYWNoIG9mIHRoZSBmYXJtZXJzIHdpc2hlcyB0byBwdXJjaGFzZSBhIHNpbmdsZSBsb3Qgb2YgaGF5LjxcL3A+XHJcblxyXG48cD5UbyBtYWtlIHN1cmUgdGhlIG90aGVyIGZhcm1lcnMgZG8gbm90IGdldCBqZWFsb3VzIG9mIGVhY2ggb3RoZXIsIEZhcm1lciBKb2huIGRlY2lkZXMgdGhhdCBoZSBtdXN0IHNlbGwgdGhlIGxvdHMgb2YgaGF5IGF0IGEgZml4ZWQgcHJpY2UgdG8gZWFjaCBjdXN0b21lciB3aG8gaXMgd2lsbGluZyB0byBwYXkgYXQgbGVhc3QgdGhhdCBwcmljZTsgdGhlIHJlc3Qgd2lsbCBkZWNsaW5lIHRoZSBwdXJjaGFzZS48XC9wPlxyXG5cclxuPHA+SGVscCBGYXJtZXIgSm9obiBkZXRlcm1pbmUgdGhlIHNtYWxsZXN0IHByaWNlIGhlIHNob3VsZCBzZXQgb24gYSBsb3Qgb2YgaGF5IHRvIG1heGltaXplIHRoZSBhbW91bnQgb2YgbW9uZXkgaGUgbWFrZXMuPFwvcD5cclxuIiwiaW5wdXQiOiI8cD4qIExpbmUgMTogVHdvIHNwYWNlLXNlcGFyYXRlZCBpbnRlZ2VyczogTiBhbmQgTTxcL3A+XHJcblxyXG48cD4qIExpbmVzIDIuLk0rMTogTGluZSBpKzEgY29udGFpbnMgYSBzaW5nbGUgaW50ZWdlcjogUF9pPFwvcD5cclxuIiwib3V0cHV0IjoiPHA+KiBMaW5lIDE6IFR3byBzcGFjZS1zZXBhcmF0ZWQgaW50ZWdlcnM6IHRoZSBzbWFsbGVzdCBwcmljZSB0aGF0IEZhcm1lciBKb2huIHNob3VsZCBjaG9vc2UgdG8gbWF4aW1pemUgaGlzIHJldmVudWUgYW5kIHRoZSBhbW91bnQgb2YgbW9uZXkgaGUgdGFrZXMgaW4uPFwvcD5cclxuXHJcbjxwPiZuYnNwOzxcL3A+XHJcbiIsImhpbnQiOiIiLCJvcmlnaW5hbCI6IjEiLCJodG1sX3RpdGxlIjoiMCIsInByb2JsZW1fbGFuZ190Y29kZSI6IkVuZ2xpc2gifV0=</div>
				</div>
								</div>
<h3>문제 : https://www.acmicpc.net/problem/1246</h3>
