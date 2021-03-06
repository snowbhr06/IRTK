


<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
    "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
<meta name="robots" content="noindex,nofollow" />
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
<meta name="generator" content="0.11.1 (2b48ae40ea1b)" />
<meta http-equiv="X-UA-Compatible" content="IE=8" />
<link rel="icon" href="/source/default/img/icon.png" type="image/png" />
<link rel="stylesheet" type="text/css" media="all"
    title="Default" href="/source/default/style.css" />
<link rel="alternate stylesheet" type="text/css" media="all"
    title="Paper White" href="/source/default/print.css" />
<link rel="stylesheet" type="text/css" href="/source/default/print.css" media="print" />
<link rel="stylesheet" type="text/css" href="/source/default/jquery.tooltip.css" />

<link rel="search" href="/source/opensearch"
    type="application/opensearchdescription+xml"
    title="OpenGrok Search for current project(s)" />
<script type="text/javascript" src="/source/jquery-1.4.4.min.js"></script>
<script type="text/javascript" src="/source/jquery.tooltip-1.3.pack.js"></script>

<script type="text/javascript" src="/source/utils.js"></script>
<title>Cross Reference: /kde/Libraries/kactivities/cmake/modules/c++11-test-variadic-templates-N2242.cpp</title>
</head><body>
<script type="text/javascript">/* <![CDATA[ */
    document.hash = 'null';document.rev = '';document.link = '/source/xref/kde/Libraries/kactivities/cmake/modules/c%2B%2B11-test-variadic-templates-N2242.cpp';document.annotate = false;
    document.domReady.push(function() {domReadyMast();});
    document.pageReady.push(function() { pageReadyMast();});
/* ]]> */</script>
<div id="page">
    <div id="whole_header">
        <form action="/source/search">
<div id="header">
<a href="/source/" class="cslogo">
    <span style="color: #5a2c00; letter-spacing: -2px;">{</span><span 
        style="color: #0f3368; vertical-align: middle;">Code</span>
    <span style="color: #222222; vertical-align: middle;">Search</span>
</a>
<span id="partner">
    <a href="http://www.metager.de"><span id="partner_metager"></span></a>
</span>



    <div id="pagetitle"><span id="filename"
                    >Cross Reference: c++11-test-variadic-templates-N2242.cpp</span></div>
</div>
<div id="Masthead">
    <tt><a href="/source/xref/">xref</a>: /<a href="/source/xref/kde/">kde</a>/<a href="/source/xref/kde/Libraries/">Libraries</a>/<a href="/source/xref/kde/Libraries/kactivities/">kactivities</a>/<a href="/source/xref/kde/Libraries/kactivities/cmake/">cmake</a>/<a href="/source/xref/kde/Libraries/kactivities/cmake/modules/">modules</a>/<a href="/source/xref/kde/Libraries/kactivities/cmake/modules/c%2B%2B11-test-variadic-templates-N2242.cpp">c++11-test-variadic-templates-N2242.cpp</a></tt>
</div>
<div id="bar">
    <ul>
        <li><a href="/source/"><span id="home"></span>Home</a></li><li><a href="/source/history/kde/Libraries/kactivities/cmake/modules/c%2B%2B11-test-variadic-templates-N2242.cpp"><span id="history"></span>History</a></li><li><a href="#" onclick="javascript:get_annotations(); return false;"
            ><span class="annotate"></span>Annotate</a></li><li><a href="#" onclick="javascript:lntoggle();return false;"
            title="Show or hide line numbers (might be slower if file has more than 10 000 lines)."><span id="line"></span>Line#</a></li><li><a
            href="#" onclick="javascript:lsttoggle();return false;"
            title="Show or hide symbol list."><span id="defbox"></span>Navigate</a></li><li><a href="/source/raw/kde/Libraries/kactivities/cmake/modules/c%2B%2B11-test-variadic-templates-N2242.cpp"><span id="download"></span>Download</a></li><li><input type="text" id="search" name="q" class="q" />
            <input type="submit" value="Search" class="submit" /></li><li><input type="checkbox" name="path" value="/kde/Libraries/kactivities/cmake/modules/" /> only in <b>c++11-test-variadic-templates-N2242.cpp</b></li>
        
    </ul>
    <input type="hidden" name="project" value="kde" />
</div>
        </form>
    </div>
<div id="content">
<script type="text/javascript">/* <![CDATA[ */
document.pageReady.push(function() { pageReadyList();});
/* ]]> */</script>

<div id="src">
    <pre><script type="text/javascript">/* <![CDATA[ */
function get_sym_list(){return [["Function","xf",[["addall",4],["addall",10],["main",15]]]];} /* ]]> */</script><a class="l" name="1" href="#1">1</a>#<b>include</b> &lt;<a href="/source/s?path=iostream">iostream</a>&gt;
<a class="l" name="2" href="#2">2</a>
<a class="l" name="3" href="#3">3</a><b>template</b> &lt;<b>typename</b> T&gt;
<a class="l" name="4" href="#4">4</a><b>int</b> <a class="xf" name="addall"/><a href="/source/s?refs=addall&amp;project=kde" class="xf">addall</a>(T <a class="xa" name="value"/><a href="/source/s?refs=value&amp;project=kde" class="xa">value</a>)
<a class="l" name="5" href="#5">5</a>{
<a class="l" name="6" href="#6">6</a>    <b>return</b> <a href="/source/s?defs=value&amp;project=kde">value</a>;
<a class="l" name="7" href="#7">7</a>}
<a class="l" name="8" href="#8">8</a>
<a class="l" name="9" href="#9">9</a><b>template</b> &lt;<b>typename</b> T, <b>typename</b>... <a href="/source/s?defs=Args&amp;project=kde">Args</a>&gt;
<a class="hl" name="10" href="#10">10</a><b>int</b> <a class="xf" name="addall"/><a href="/source/s?refs=addall&amp;project=kde" class="xf">addall</a>(T <a class="xa" name="value"/><a href="/source/s?refs=value&amp;project=kde" class="xa">value</a>, <a href="/source/s?defs=Args&amp;project=kde">Args</a> ... <a class="xa" name="args"/><a href="/source/s?refs=args&amp;project=kde" class="xa">args</a>)
<a class="l" name="11" href="#11">11</a>{
<a class="l" name="12" href="#12">12</a>    <b>return</b> <a href="/source/s?defs=value&amp;project=kde">value</a> + <a href="/source/s?defs=addall&amp;project=kde">addall</a>(<a class="d" href="#args">args</a>...);
<a class="l" name="13" href="#13">13</a>}
<a class="l" name="14" href="#14">14</a>
<a class="l" name="15" href="#15">15</a><b>int</b> <a class="xf" name="main"/><a href="/source/s?refs=main&amp;project=kde" class="xf">main</a>()
<a class="l" name="16" href="#16">16</a>{
<a class="l" name="17" href="#17">17</a>    <b>int</b> <a class="xl" name="v1"/><a href="/source/s?refs=v1&amp;project=kde" class="xl">v1</a> = <a href="/source/s?defs=addall&amp;project=kde">addall</a>(<span class="n">1</span>, <span class="n">2</span>, <span class="n">3</span>, <span class="n">4</span>, <span class="n">5</span>); <span class="c">// 15</span>
<a class="l" name="18" href="#18">18</a>    <b>int</b> <a class="xl" name="v2"/><a href="/source/s?refs=v2&amp;project=kde" class="xl">v2</a> = <a href="/source/s?defs=addall&amp;project=kde">addall</a>(<span class="n">1</span>, <span class="n">1</span>, <span class="n">1</span>, <span class="n">1</span>, <span class="n">2</span>, <span class="n">2</span>, <span class="n">2</span>, <span class="n">2</span>, <span class="n">3</span>, <span class="n">3</span>, <span class="n">3</span>, <span class="n">3</span>, <span class="n">4</span>, <span class="n">4</span>, <span class="n">4</span>, <span class="n">4</span>); <span class="c">// 40</span>
<a class="l" name="19" href="#19">19</a>    <b>return</b> ((<a class="d" href="#v1">v1</a> == <span class="n">15</span>) &amp;&amp; (<a class="d" href="#v2">v2</a> == <span class="n">40</span>)) ? 0 : <span class="n">1</span>;
<a class="hl" name="20" href="#20">20</a>}
<a class="l" name="21" href="#21">21</a></pre>
</div>
    <div id="footer">
<p><a href="http://www.opensolaris.org/os/project/opengrok/"
 title="Served by OpenGrok"><span id="fti"></span></a></p>
<p>
    <a href="http://www.rrzn.uni-hannover.de"><span id="partner_rrzn"></span></a>
    <a href="http://www.uni-hannover.de"><span id="partner_luh"></span></a>
</p>
<p>Indexes created Fri Apr 19 11:21:17 CEST 2013</p>
<p><a href="http://www.metager.de/impressum.html">Impressum (legal notice)</a></p>
    
    </div>
    </div>
</div>
</body>
</html>

