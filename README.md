<h1 class="gap">0x1D. C - Binary trees</h1>


  <ul class="list-group metadata" id="project-metadata">
  <li class="list-group-item">
    <i class="fa fa-folder-open fa-fw"></i>
    <em>Foundations &gt; Low-level programming &amp; Algorithm &gt; Data structures and Algorithms</em>
  </li>


<li class="list-group-item">
      <i class="fa fa-user fa-fw"></i> By Alexandre Gautier, Software Engineer at Holberton School
    </li>

<li class="list-group-item">
      <i class="fa fa-cogs fa-fw"></i> Weight: 5
    </li>


<li class="list-group-item">
      <i class="fa fa-users fa-fw"></i> Project to be done in teams of 2 people
        (your team: Juan Duque, Natalia Arteaga Corrales, Brian Zapata
    </li>

<li class="list-group-item">
        <i class="fa fa-calendar fa-fw"></i>
          Project over - took place from 07-19-2021 to 07-23-2021
          - you're done with <span id="student_task_done_percentage">100</span>% of tasks.
      </li>



<li class="list-group-item">
        <i class="fa fa-check-square fa-fw"></i>
        QA review fully automated.
      </li>


</ul>



<div id="project_id" style="display: none" data-project-id="270"></div>


<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/vhnhjnI1aebhcSeLOjfrww" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is a binary tree</li>
<li>What is the difference between a binary tree and a Binary Search Tree</li>
<li>What is the possible gain in terms of time complexity compared to linked lists</li>
<li>What are the depth, the height, the size of a binary tree</li>
<li>What are the different traversal methods to go through a binary tree</li>
<li>What is a complete, a full, a perfect, a balanced binary tree</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 14.04 LTS</li>
<li>Your programs and functions will be compiled with <code>gcc 4.8.4</code> using the flags <code>-Wall</code> <code>-Werror</code> <code>-Wextra</code> and <code>-pedantic</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project, is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are allowed to use the standard library</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions should be included in your header file called <code>binary_trees.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>

## Tasks
    <h3 class="panel-title">
      0. New node
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>

<p>Write a function that creates a binary tree node</p>
<ul>
<li>Prototype: <code>binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);</code></li>
<li>Where <code>parent</code> is a pointer to the parent node of the node to create</li>
<li>And <code>value</code> is the value to put in the new node</li>
<li>When created, a node does not have any child</li>
<li>Your function must return a pointer to the new node, or <code>NULL</code> on failure</li>
</ul>
   <h3 class="panel-title">
      1. Insert left
    </h3>

<div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>

<p>Write a function that inserts a node as the left-child of another node</p>

<ul>
<li>Prototype: <code>binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);</code></li>
<li>Where <code>parent</code> is a pointer to the node to insert the left-child in</li>
<li>And <code>value</code> is the value to store in the new node</li>
<li>Your function must return a pointer to the created node, or <code>NULL</code> on failure or if <code>parent</code> is <code>NULL</code></li>
<li>If <code>parent</code> already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.</li>
</ul>
    <h3 class="panel-title">
      2. Insert right
    </h3>

<div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>

<p>Write a function that inserts a node as the right-child of another node</p>

<ul>
<li>Prototype: <code>binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);</code></li>
<li>Where <code>parent</code> is a pointer to the node to insert the right-child in</li>
<li>And <code>value</code> is the value to store in the new node</li>
<li>Your function must return a pointer to the created node, or <code>NULL</code> on failure or if <code>parent</code> is <code>NULL</code></li>
<li>If <code>parent</code> already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.</li>
</ul>