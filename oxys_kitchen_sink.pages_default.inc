<?php
/**
 * @file
 * oxys_kitchen_sink.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function oxys_kitchen_sink_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'kitchen_sink';
  $page->task = 'page';
  $page->admin_title = 'Kitchen sink';
  $page->admin_description = 'Contains dummy text for visual regression testing';
  $page->path = 'kitchen-sink';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_kitchen_sink__panel';
  $handler->task = 'page';
  $handler->subtask = 'kitchen_sink';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e1718bd4-906f-4594-9cfa-5a33bc2c862a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-223d1844-5a2f-45c2-bb12-5e76e889a627';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h1 class="page-header">Page Header <small>With Small Text</small></h1> <h1>This is an h1 heading</h1> <h2>This is an h2 heading</h2> <h3>This is an h3 heading</h3> <h4>This is an h4 heading</h4> <h5>This is an h5 heading</h5> <h6>This is an h6 heading</h6> <p class="lead">This is a lead paragraph.</p> <p>This is an <b>ordinary paragraph</b> that is <i>long enough</i> to wrap to <u>multiple lines</u> so that you can see how the line spacing looks.</p> <p class="text-muted">Muted color paragraph.</p> <p class="text-warning">Warning color paragraph.</p> <p class="text-danger">Danger color paragraph.</p> <p class="text-info">Info color paragraph.</p> <p class="text-success">Success color paragraph.</p> <p><small>This is text in a <code>small</code> wrapper. <abbr title="No Big Deal">NBD</abbr>, right?</small></p> <hr> <address>                <strong>Twitter, Inc.</strong><br>                795 Folsom Ave, Suite 600<br>                San Francisco, CA 94107<br>                <abbr title="Phone">P:</abbr> (123) 456-7890              </address><address class="col-6">                <strong>Full Name</strong><br>                <a href="mailto:#">first.last@example.com</a>              </address> <hr> <blockquote>Here\'s what a blockquote looks like in Bootstrap. <small>Use <code>small</code> to identify the source.</small> </blockquote> <hr> <div class="row">   <div class="col-xs-6">     <ul>       <li>Normal Unordered List</li>       <li>Can Also Work         <ul>           <li>With Nested Children</li>         </ul>       </li>       <li>Adds Bullets to Page</li>     </ul>   </div>   <div class="col-xs-6">     <ol>       <li>Normal Ordered List</li>       <li>Can Also Work         <ol>           <li>With Nested Children</li>         </ol>       </li>       <li>Adds Bullets to Page</li>     </ol>   </div> </div> <hr> <pre>function preFormatting() {  // looks like this;  var something = somethingElse;  return true;}</pre> <p>Lorem ipsum dolor sit amet, consectetuer adipiscing  elit. Aenean commodo ligula eget dolor. Aenean massa  <strong>strong</strong>. Cum sociis natoque penatibus  et magnis dis parturient montes, nascetur ridiculus  mus. Donec quam felis, ultricies nec, pellentesque  eu, pretium quis, sem. Nulla consequat massa quis  enim. Donec pede justo, fringilla vel, aliquet nec,  vulputate eget, arcu. In enim justo, rhoncus ut,  imperdiet a, venenatis vitae, justo. Nullam dictum  felis eu pede <a class="external ext" href="#">link</a>  mollis pretium. Integer tincidunt. Cras dapibus.  Vivamus elementum semper nisi. Aenean vulputate  eleifend tellus. Aenean leo ligula, porttitor eu,  consequat vitae, eleifend ac, enim. Aliquam lorem ante,  dapibus in, viverra quis, feugiat a, tellus. Phasellus  viverra nulla ut metus varius laoreet. Quisque rutrum.  Aenean imperdiet. Etiam ultricies nisi vel augue.  Curabitur ullamcorper ultricies nisi.</p> <h2>Lorem ipsum dolor sit amet consectetuer adipiscing  elit</h1> <h3>Aenean commodo ligula eget dolor aenean massa</h2> <p>Lorem ipsum dolor sit amet, consectetuer adipiscing  elit. Aenean commodo ligula eget dolor. Aenean massa.  Cum sociis natoque penatibus et magnis dis parturient  montes, nascetur ridiculus mus. Donec quam felis,  ultricies nec, pellentesque eu, pretium quis, sem.</p> <h4>Aenean commodo ligula eget dolor aenean massa</h2> <p>Lorem ipsum dolor sit amet, consectetuer adipiscing  elit. Aenean commodo ligula eget dolor. Aenean massa.  Cum sociis natoque penatibus et magnis dis parturient  montes, nascetur ridiculus mus. Donec quam felis,  ultricies nec, pellentesque eu, pretium quis, sem.</p> <ul>   <li>Lorem ipsum dolor sit amet consectetuer.</li>   <li>Aenean commodo ligula eget dolor.</li>   <li>Aenean massa cum sociis natoque penatibus.</li> </ul> <p>Lorem ipsum dolor sit amet, consectetuer adipiscing  elit. Aenean commodo ligula eget dolor. Aenean massa.  Cum sociis natoque penatibus et magnis dis parturient  montes, nascetur ridiculus mus. Donec quam felis,  ultricies nec, pellentesque eu, pretium quis, sem.</p> <table class="data">   <tr>     <th>Entry Header 1</th>     <th>Entry Header 2</th>     <th>Entry Header 3</th>     <th>Entry Header 4</th>   </tr>   <tr>     <td>Entry First Line 1</td>     <td>Entry First Line 2</td>     <td>Entry First Line 3</td>     <td>Entry First Line 4</td>   </tr>   <tr>     <td>Entry Line 1</td>     <td>Entry Line 2</td>     <td>Entry Line 3</td>     <td>Entry Line 4</td>   </tr>   <tr>     <td>Entry Last Line 1</td>     <td>Entry Last Line 2</td>     <td>Entry Last Line 3</td>     <td>Entry Last Line 4</td>   </tr> </table> <p>Lorem ipsum dolor sit amet, consectetuer adipiscing  elit. Aenean commodo ligula eget dolor. Aenean massa.  Cum sociis natoque penatibus et magnis dis parturient  montes, nascetur ridiculus mus. Donec quam felis,  ultricies nec, pellentesque eu, pretium quis, sem.</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'sink_content',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '223d1844-5a2f-45c2-bb12-5e76e889a627';
    $display->content['new-223d1844-5a2f-45c2-bb12-5e76e889a627'] = $pane;
    $display->panels['middle'][0] = 'new-223d1844-5a2f-45c2-bb12-5e76e889a627';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['kitchen_sink'] = $page;

  return $pages;

}
